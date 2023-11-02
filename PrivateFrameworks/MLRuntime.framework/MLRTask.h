
@interface MLRTask : NSObject <NSSecureCoding> {
    DESInternalDodMLTask * _DESTask;
    MLRTaskAttachments * _attachments;
    id  _internalTask;
    MLRTaskParameters * _parameters;
}

@property (nonatomic, readonly) DESInternalDodMLTask *DESTask;
@property (nonatomic, readonly, copy) MLRTaskAttachments *attachments;
@property (nonatomic, readonly) id internalTask;
@property (nonatomic, readonly) MLRTaskParameters *parameters;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)DESTask;
- (id)attachments;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDodMLTask:(id)arg1;
- (id)initWithParameters:(id)arg1 attachments:(id)arg2;
- (id)initWithParameters:(id)arg1 attachments:(id)arg2 internalTask:(id)arg3;
- (id)initWithParametersDict:(id)arg1;
- (id)internalTask;
- (id)parameters;

@end
