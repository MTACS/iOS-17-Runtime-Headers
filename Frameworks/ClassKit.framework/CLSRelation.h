
@interface CLSRelation : NSObject {
    bool  _faultable;
    Class  _fromEntity;
    NSString * _fromKey;
    Class  _toEntity;
    NSString * _toKey;
}

@property (getter=isFaultable, nonatomic, readonly) bool faultable;
@property (nonatomic, readonly) Class fromEntity;
@property (nonatomic, readonly) NSString *fromKey;
@property (nonatomic, readonly) Class toEntity;
@property (nonatomic, readonly) NSString *toKey;

- (void).cxx_destruct;
- (id)description;
- (Class)fromEntity;
- (id)fromKey;
- (id)initWithFromEntity:(Class)arg1 toEntity:(Class)arg2 onFromKey:(id)arg3 toKey:(id)arg4 faultable:(bool)arg5;
- (bool)isEquivalentToRelation:(id)arg1;
- (bool)isFaultable;
- (bool)isInverseOfRelation:(id)arg1;
- (Class)toEntity;
- (id)toKey;

@end
