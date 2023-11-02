
@interface SAUIRequestEndBehavior : AceObject <SAAceSerializable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSNumber *minimumAutoDismissalTimeInMs;
@property (nonatomic) bool premptivelyResumeMedia;
@property (readonly) Class superclass;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)minimumAutoDismissalTimeInMs;
- (bool)premptivelyResumeMedia;
- (void)setMinimumAutoDismissalTimeInMs:(id)arg1;
- (void)setPremptivelyResumeMedia:(bool)arg1;

@end
