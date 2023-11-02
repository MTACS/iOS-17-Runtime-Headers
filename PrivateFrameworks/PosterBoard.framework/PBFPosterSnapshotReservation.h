
@interface PBFPosterSnapshotReservation : NSObject <BSCancellable, NSCopying> {
    NSURL * _URL;
    <PBFDisplayContext> * _displayContext;
    NSError * _error;
}

@property (nonatomic, readonly) NSURL *URL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <PBFDisplayContext> *displayContext;
@property (nonatomic, readonly) NSError *error;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UIImage *image;
@property (nonatomic, readonly) bool isValid;
@property (readonly) Class superclass;

+ (id)globalCache;
+ (void)noteAllSnapshotsWereReaped;
+ (void)noteSnapshotWasReaped:(id)arg1;

- (void).cxx_destruct;
- (id)URL;
- (void)cancel;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)displayContext;
- (id)error;
- (id)fetchImageWithError:(out id*)arg1;
- (id)image;
- (id)initWithURL:(id)arg1 displayContext:(id)arg2 image:(id)arg3 error:(id)arg4;
- (bool)isValid;

@end
