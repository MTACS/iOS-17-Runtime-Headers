
@interface ATXExecutableReferencePair : NSObject {
    ATXExecutableIdentifier * _executable;
    ATXExecutableReference * _reference;
}

@property (nonatomic, readonly) ATXExecutableIdentifier *executable;
@property (nonatomic, readonly) ATXExecutableReference *reference;

- (void).cxx_destruct;
- (id)executable;
- (unsigned long long)hash;
- (id)initWithReference:(id)arg1 executable:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)reference;

@end
