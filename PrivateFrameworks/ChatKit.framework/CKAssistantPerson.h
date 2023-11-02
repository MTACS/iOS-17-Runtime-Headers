
@interface CKAssistantPerson : NSObject {
    NSString * _internalGUID;
    NSString * _label;
}

@property (nonatomic, copy) NSString *internalGUID;
@property (nonatomic, copy) NSString *label;

- (void).cxx_destruct;
- (id)internalGUID;
- (id)label;
- (void)setInternalGUID:(id)arg1;
- (void)setLabel:(id)arg1;

@end
