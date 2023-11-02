
@interface OCDReader : NSObject {
    <OCDReaderDelegate> * _delegate;
    <TCCancelDelegate> * mCancelDelegate;
    NSData * mData;
    NSString * mFileName;
    bool  mIsThumbnail;
    NSError * mStartError;
}

@property (nonatomic, retain) <TCCancelDelegate> *cancelDelegate;
@property (nonatomic, retain) NSData *data;
@property (nonatomic) <OCDReaderDelegate> *delegate;
@property (nonatomic, retain) NSString *fileName;
@property (nonatomic) bool isThumbnail;
@property (nonatomic, retain) NSError *startError;

- (void).cxx_destruct;
- (id)cancelDelegate;
- (id)data;
- (id)delegate;
- (id)fileName;
- (id)initWithCancelDelegate:(id)arg1;
- (bool)isBinaryReader;
- (bool)isThumbnail;
- (id)read;
- (void)setCancelDelegate:(id)arg1;
- (void)setData:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFileName:(id)arg1;
- (void)setIsThumbnail:(bool)arg1;
- (void)setStartError:(id)arg1;
- (void)setStartErrorMessageFromException:(id)arg1;
- (bool)start;
- (id)startError;
- (bool)verifyFileFormat;

@end
