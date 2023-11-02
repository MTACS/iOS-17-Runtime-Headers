
@interface CLSMessageAttachment : NSObject {
    NSDictionary * _attributionInfo;
    long long  _createdDateValue;
    NSString * _filename;
    NSString * _guid;
    bool  _hideAttachment;
    bool  _isOutgoing;
    bool  _isSticker;
    NSString * _mimeType;
    NSString * _originalGUID;
    long long  _startDateValue;
    NSDictionary * _stickerUserInfo;
    long long  _totalBytes;
    NSString * _transferName;
    long long  _transferState;
    NSDictionary * _userInfo;
    NSString * _utiType;
}

@property (nonatomic, readonly) NSDictionary *attributionInfo;
@property (nonatomic, readonly) NSDate *createdDate;
@property (nonatomic, readonly) long long createdDateValue;
@property (nonatomic, readonly) NSString *filename;
@property (nonatomic, readonly) NSString *guid;
@property (nonatomic, readonly) bool hideAttachment;
@property (nonatomic, readonly) bool isOutgoing;
@property (nonatomic, readonly) bool isSticker;
@property (nonatomic, readonly) NSString *mimeType;
@property (nonatomic, readonly) NSString *originalGUID;
@property (nonatomic, readonly) long long startDateValue;
@property (nonatomic, readonly) NSDictionary *stickerUserInfo;
@property (nonatomic, readonly) long long totalBytes;
@property (nonatomic, readonly) NSString *transferName;
@property (nonatomic, readonly) long long transferState;
@property (nonatomic, readonly) NSDictionary *userInfo;
@property (nonatomic, readonly) NSString *utiType;

- (void).cxx_destruct;
- (id)attributionInfo;
- (id)createdDate;
- (long long)createdDateValue;
- (id)debugDescription;
- (id)filename;
- (id)guid;
- (bool)hideAttachment;
- (id)initWithAttachmentRecord:(struct _IMDAttachmentRecordStruct { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; long long x2; struct __CFArray {} *x3; }*)arg1;
- (bool)isOutgoing;
- (bool)isSticker;
- (id)mimeType;
- (id)originalGUID;
- (long long)startDateValue;
- (id)stickerUserInfo;
- (long long)totalBytes;
- (id)transferName;
- (long long)transferState;
- (id)userInfo;
- (id)utiType;

@end
