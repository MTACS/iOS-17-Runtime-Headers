
@interface WFSiriDialogRequest : WFSiriActionRequest {
    WFDialogRequest * _dialogRequest;
}

@property (nonatomic, readonly) WFDialogRequest *dialogRequest;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)dialogRequest;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDialogRequest:(id)arg1;

@end
