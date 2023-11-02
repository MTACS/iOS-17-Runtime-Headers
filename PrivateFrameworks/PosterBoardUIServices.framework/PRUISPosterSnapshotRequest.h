
@interface PRUISPosterSnapshotRequest : NSObject <NSCopying, NSMutableCopying> {
    PRUISPosterAttachmentConfiguration * _attachmentConfiguration;
    PRPosterSnapshotDefinition * _definition;
    bool  _determineColorStatistics;
    long long  _interfaceOrientation;
    <PRPosterContents> * _poster;
    unsigned long long  _priority;
    <BSInvalidatable> * _sandboxExtension;
    UIScreen * _screen;
    double  _timeout;
    long long  _userInterfaceStyle;
}

@property (nonatomic, retain) PRUISPosterAttachmentConfiguration *attachmentConfiguration;
@property (nonatomic, readonly, copy) NSArray *attachments;
@property (nonatomic, retain) PRPosterSnapshotDefinition *definition;
@property (nonatomic) bool determineColorStatistics;
@property (nonatomic) long long interfaceOrientation;
@property (nonatomic, readonly) <PRPosterContents> *poster;
@property (nonatomic) unsigned long long priority;
@property (nonatomic, retain) UIScreen *screen;
@property (nonatomic) double timeout;
@property (nonatomic) long long userInterfaceStyle;

+ (id)snapshotRequestForPRPosterConfiguration:(id)arg1 definition:(id)arg2 interfaceOrientation:(long long)arg3;
+ (id)snapshotRequestForPRSPosterConfiguration:(id)arg1 definition:(id)arg2 interfaceOrientation:(long long)arg3;
+ (id)snapshotRequestForPoster:(id)arg1 definition:(id)arg2 interfaceOrientation:(long long)arg3;

- (void).cxx_destruct;
- (id)attachmentConfiguration;
- (id)attachments;
- (id)buildPosterKitSnapshotRequestForOutput:(unsigned long long)arg1 priority:(long long)arg2 error:(out id*)arg3;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)definition;
- (bool)determineColorStatistics;
- (unsigned long long)hash;
- (id)initWithPoster:(id)arg1 definition:(id)arg2 interfaceOrientation:(long long)arg3;
- (long long)interfaceOrientation;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)poster;
- (unsigned long long)priority;
- (id)screen;
- (id)serverPosterPath;
- (void)setAttachmentConfiguration:(id)arg1;
- (void)setAttachments:(id)arg1;
- (void)setDefinition:(id)arg1;
- (void)setDetermineColorStatistics:(bool)arg1;
- (void)setInterfaceOrientation:(long long)arg1;
- (void)setPriority:(unsigned long long)arg1;
- (void)setScreen:(id)arg1;
- (void)setTimeout:(double)arg1;
- (void)setUserInterfaceStyle:(long long)arg1;
- (double)timeout;
- (long long)userInterfaceStyle;

@end
