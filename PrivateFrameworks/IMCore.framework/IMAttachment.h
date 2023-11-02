
@interface IMAttachment : NSObject {
    NSDate * _createdDate;
    NSString * _guid;
    bool  _isSticker;
    bool  _isTransferComplete;
    NSString * _path;
}

@property (nonatomic, retain) NSDate *createdDate;
@property (nonatomic, retain) NSString *guid;
@property (nonatomic) bool isSticker;
@property (nonatomic) bool isTransferComplete;
@property (nonatomic, retain) NSString *path;

- (void).cxx_destruct;
- (id)createdDate;
- (id)description;
- (id)fileTransfer;
- (id)guid;
- (id)initWithPath:(id)arg1 guid:(id)arg2;
- (id)initWithPath:(id)arg1 guid:(id)arg2 createdDate:(id)arg3 isSticker:(bool)arg4 isTransferComplete:(bool)arg5;
- (bool)isSticker;
- (bool)isTransferComplete;
- (id)path;
- (void)setCreatedDate:(id)arg1;
- (void)setGuid:(id)arg1;
- (void)setIsSticker:(bool)arg1;
- (void)setIsTransferComplete:(bool)arg1;
- (void)setPath:(id)arg1;

@end
