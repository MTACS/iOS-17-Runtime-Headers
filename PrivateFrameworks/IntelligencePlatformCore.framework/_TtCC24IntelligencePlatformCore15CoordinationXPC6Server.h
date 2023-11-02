
@interface _TtCC24IntelligencePlatformCore15CoordinationXPC6Server : NSObject <GDCoordinationXPCProtocol>

- (void)graphUpdatedWithSource:(id)arg1 completion:(id /* block */)arg2;
- (id)init;
- (void)sourceUpdatedWithSourceType:(id)arg1 sourceIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)streamUpdatedWithStreamName:(id)arg1 isDelete:(bool)arg2 completion:(id /* block */)arg3;

@end
