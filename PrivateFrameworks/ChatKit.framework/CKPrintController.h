
@interface CKPrintController : NSObject {
    NSCache * _avatarCache;
    CNAvatarImageRenderer * _avatarImageRenderer;
    bool  _isPrinting;
}

@property (nonatomic, retain) NSCache *avatarCache;
@property (nonatomic, retain) CNAvatarImageRenderer *avatarImageRenderer;
@property (setter=setPrinting:, nonatomic) bool isPrinting;

+ (id)printAttributes:(id)arg1;
+ (id)printBackgroundColor;
+ (void)printBalloonDescriptor:(struct CKBalloonDescriptor_t { BOOL x1; BOOL x2; BOOL x3; BOOL x4; unsigned long long x5; BOOL x6; BOOL x7; long long x8; long long x9; bool x10; bool x11; bool x12; bool x13; }*)arg1;
+ (id)printBalloonTextColor;
+ (void)printResolvedColors:(id*)arg1 balloonDescriptor:(struct CKBalloonDescriptor_t { BOOL x1; BOOL x2; BOOL x3; BOOL x4; unsigned long long x5; BOOL x6; BOOL x7; long long x8; long long x9; bool x10; bool x11; bool x12; bool x13; }*)arg2 coloredBalloonView:(id)arg3;
+ (id)printTranscriptTextColor;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)avatarCache;
- (id)avatarImageForContact:(id)arg1 diameter:(double)arg2;
- (id)avatarImageRenderer;
- (void)clearAvatarCache;
- (id)init;
- (bool)isPrinting;
- (void)setAvatarCache:(id)arg1;
- (void)setAvatarImageRenderer:(id)arg1;
- (void)setPrinting:(bool)arg1;

@end
