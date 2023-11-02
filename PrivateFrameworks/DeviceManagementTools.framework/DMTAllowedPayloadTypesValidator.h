
@interface DMTAllowedPayloadTypesValidator : NSObject <DMTConfigurationProfileValidator> {
    NSSet * _allowedPayloadTypes;
    NSSet * _requireAllPayloadTypes;
}

@property (nonatomic, copy) NSSet *allowedPayloadTypes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSSet *requireAllPayloadTypes;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)allowedPayloadTypes;
- (id)requireAllPayloadTypes;
- (void)setAllowedPayloadTypes:(id)arg1;
- (void)setRequireAllPayloadTypes:(id)arg1;
- (bool)validateProfile:(id)arg1 error:(id*)arg2;

@end
