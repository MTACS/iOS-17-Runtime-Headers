
@interface _INCOptionalLocalExtension : NSObject <INCLocalExtending>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *localExtensionIdentifier;
@property (readonly) Class superclass;

- (id)handlerForIntent:(id)arg1;
- (id)localExtensionIdentifier;

@end
