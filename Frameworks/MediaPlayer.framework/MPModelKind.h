
@interface MPModelKind : NSObject <MPCPlaybackEngineEventPayloadValueJSONConvertible, NSCoding, NSCopying, NSSecureCoding> {
    Class  _modelClass;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *humanDescription;
@property (nonatomic, readonly) MPModelKind *identityKind;
@property (nonatomic, readonly) Class modelClass;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer

+ (id)_kindWithModelClass:(Class)arg1 cacheKey:(id)arg2 block:(id /* block */)arg3;
+ (id)identityKind;
+ (id)kindWithModelClass:(Class)arg1;
+ (id)kindWithModelClass:(Class)arg1 cacheKey:(id)arg2 block:(id /* block */)arg3;
+ (bool)supportsSecureCoding;
+ (id)unknownKind;

- (void).cxx_destruct;
- (id)_initWithModelClass:(Class)arg1;
- (void)applyToView:(struct shared_ptr<mlcore::LibraryView> { struct LibraryView {} *x1; struct __shared_weak_count {} *x2; })arg1 withContext:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)humanDescription;
- (id)identityKind;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (Class)modelClass;
- (struct shared_ptr<mlcore::Predicate> { struct Predicate {} *x1; struct __shared_weak_count {} *x2; })predicateWithBaseProperty:(void*)arg1;
- (struct shared_ptr<mlcore::Predicate> { struct Predicate {} *x1; struct __shared_weak_count {} *x2; })representedSearchScopePredicate;

// Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore

+ (id)payloadValueFromJSONValue:(id)arg1;

- (id)mpc_jsonValue;

@end
