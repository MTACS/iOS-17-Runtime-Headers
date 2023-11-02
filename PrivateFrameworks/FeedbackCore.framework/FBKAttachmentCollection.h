
@interface FBKAttachmentCollection : NSObject {
    FBKAttachmentManager * _attachmentManager;
    FBKGroupedDevice * _device;
}

@property (nonatomic, readonly) NSSet *additionalMatchers;
@property (nonatomic, retain) FBKAttachmentManager *attachmentManager;
@property (nonatomic, readonly) NSArray *attachments;
@property (nonatomic, readonly) DEDBugSession *bugSession;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, retain) FBKGroupedDevice *device;
@property (nonatomic, readonly) bool isRequired;
@property (nonatomic, readonly) unsigned long long state;

- (void).cxx_destruct;
- (id)additionalMatchers;
- (id)attachmentManager;
- (id)attachments;
- (id)bugSession;
- (id)description;
- (id)device;
- (bool)hasAnyAttachmentCollectedOrCollecting;
- (id)initWithAttachmentManager:(id)arg1 device:(id)arg2;
- (bool)isAlreadyCollectingThisMatcher:(id)arg1 ignoreAdditional:(bool)arg2;
- (bool)isRequired;
- (void)replaceEmptyAttachmentsWithAdditionalMatchersWithAdditional:(id)arg1;
- (bool)replacePreviousAdditionalMatchersWithRequiredMatchersIfNeededWithRequired:(id)arg1;
- (void)setAttachmentManager:(id)arg1;
- (void)setDevice:(id)arg1;
- (unsigned long long)state;
- (id)updateMatcherPredicatesWithUpdatedMatchers:(id)arg1 allRequiredMatchers:(id)arg2 formPlatform:(id)arg3;

@end
