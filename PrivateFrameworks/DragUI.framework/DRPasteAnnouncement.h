
@interface DRPasteAnnouncement : NSObject <NSSecureCoding> {
    DRPasteAnnouncementEndpoint * _destination;
    NSUUID * _pasteboardUUID;
    DRPasteAnnouncementEndpoint * _source;
    double  _timeout;
}

@property (nonatomic, readonly) DRPasteAnnouncementEndpoint *destination;
@property (nonatomic, readonly) NSString *localizedAnnouncementText;
@property (nonatomic, readonly) NSString *localizedAuthorizationText;
@property (nonatomic, readonly) NSUUID *pasteboardUUID;
@property (nonatomic, readonly) DRPasteAnnouncementEndpoint *source;
@property (nonatomic, readonly) double timeout;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_localizedTextRequiringAuthorization:(bool)arg1;
- (bool)canCoalesceWithAnnouncement:(id)arg1;
- (id)destination;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSource:(id)arg1 destination:(id)arg2 pasteboardUUID:(id)arg3 timeout:(double)arg4;
- (id)localizedAnnouncementText;
- (id)localizedAuthorizationText;
- (id)pasteboardUUID;
- (id)source;
- (double)timeout;

@end
