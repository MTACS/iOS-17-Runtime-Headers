
@interface MPMediaConditionalPredicate : MPMediaPredicate <MPPProtobufferCoding> {
    MPMediaPredicate * _conditionPredicate;
    MPMediaPredicate * _elsePredicate;
    MPMediaPredicate * _thenPredicate;
}

@property (nonatomic, readonly, copy) MPMediaPredicate *conditionPredicate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) MPMediaPredicate *elsePredicate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) MPMediaPredicate *thenPredicate;

+ (id)predicateWithConditionPredicate:(id)arg1 thenPredicate:(id)arg2 elsePredicate:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)ML3PredicateForContainer;
- (id)ML3PredicateForTrack;
- (id)_ML3PredicateForEntityTypeSelector:(SEL)arg1;
- (id)conditionPredicate;
- (id)elsePredicate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithConditionPredicate:(id)arg1 thenPredicate:(id)arg2 elsePredicate:(id)arg3;
- (id)initWithProtobufferDecodableObject:(id)arg1 library:(id)arg2;
- (id)protobufferEncodableObjectFromLibrary:(id)arg1;
- (id)thenPredicate;

@end
