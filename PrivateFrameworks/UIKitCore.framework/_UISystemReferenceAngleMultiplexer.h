
@interface _UISystemReferenceAngleMultiplexer : NSObject <_UISSystemReferenceAngleDataSource>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedMultiplexer;

- (double)_systemReferenceAngleForContextID:(unsigned int)arg1;
- (unsigned long long)_systemReferenceAngleModeForContextID:(unsigned int)arg1;
- (id)init;
- (void)systemReferenceAngleDidChange:(double)arg1 mode:(unsigned long long)arg2 forWindows:(id)arg3;

@end
