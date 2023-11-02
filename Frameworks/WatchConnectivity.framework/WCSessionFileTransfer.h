
@interface WCSessionFileTransfer : NSObject <NSSecureCoding> {
    WCSessionFile * _file;
    NSProgress * _internalProgress;
    NSProgress * _progress;
    id  _progressToken;
    NSDate * _transferDate;
    NSError * _transferError;
    NSString * _transferIdentifier;
    bool  _transferring;
}

@property (nonatomic, readonly) WCSessionFile *file;
@property (retain) NSProgress *internalProgress;
@property (nonatomic, readonly) NSProgress *progress;
@property (retain) id progressToken;
@property (nonatomic, retain) NSDate *transferDate;
@property (retain) NSError *transferError;
@property (copy) NSString *transferIdentifier;
@property (getter=isTransferring, nonatomic) bool transferring;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)cancel;
- (long long)compare:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)file;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFile:(id)arg1;
- (void)initializeProgress;
- (id)internalProgress;
- (bool)isEqual:(id)arg1;
- (bool)isTransferring;
- (id)progress;
- (id)progressToken;
- (void)setInternalProgress:(id)arg1;
- (void)setProgressToken:(id)arg1;
- (void)setTransferDate:(id)arg1;
- (void)setTransferError:(id)arg1;
- (void)setTransferIdentifier:(id)arg1;
- (void)setTransferring:(bool)arg1;
- (id)transferDate;
- (id)transferError;
- (id)transferIdentifier;

@end
