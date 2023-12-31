
@interface SXLayoutContextFactory : NSObject <SXLayoutContextFactory>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)createLayoutContextForColumnLayout:(id)arg1 unitConverter:(id)arg2;

@end
