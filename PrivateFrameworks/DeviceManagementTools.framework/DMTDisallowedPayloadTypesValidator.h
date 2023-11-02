
@interface DMTDisallowedPayloadTypesValidator : NSObject <DMTConfigurationProfileValidator> {
    NSSet * _disallowedPayloadTypes;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSSet *disallowedPayloadTypes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)disallowedPayloadTypes;
- (void)setDisallowedPayloadTypes:(id)arg1;
- (bool)validateProfile:(id)arg1 error:(id*)arg2;

@end
