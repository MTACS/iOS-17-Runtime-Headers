
@interface COMTReadAction : COMTTypedAction {
    COHomeKitAccessoryMemento * _memento;
}

@property (nonatomic, readonly) COHomeKitAccessoryMemento *memento;

+ (id)actionWithTargetType:(id)arg1 targetMemento:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTargetType:(id)arg1 targetMemento:(id)arg2;
- (id)memento;

@end
