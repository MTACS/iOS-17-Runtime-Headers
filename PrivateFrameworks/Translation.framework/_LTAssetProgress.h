
@interface _LTAssetProgress : NSObject <NSCopying, NSSecureCoding> {
    long long  _completedUnitCount;
    NSString * _componentFilter;
    NSMutableDictionary * _components;
    NSString * _identifier;
    NSString * _identifierPrefix;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    long long  _totalUnitCount;
}

@property (nonatomic, readonly) long long completedUnitCount;
@property (nonatomic, copy) NSString *componentFilter;
@property (nonatomic, readonly) double fractionCompleted;
@property (nonatomic, readonly) bool hasComponents;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) bool isCancelled;
@property (nonatomic, readonly) bool isFinished;
@property (nonatomic) long long offlineState;
@property (nonatomic, readonly) long long totalUnitCount;

+ (id)discreteProgressWithIdentifier:(id)arg1 offlineState:(long long)arg2;
+ (id)discreteProgressWithIdentifier:(id)arg1 totalUnitCount:(long long)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_fastReadTotal:(long long*)arg1 completed:(long long*)arg2;
- (bool)addComponent:(id)arg1;
- (void)cancel;
- (long long)completedUnitCount;
- (id)componentFilter;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (double)fractionCompleted;
- (bool)hasComponents;
- (unsigned long long)hash;
- (id)identifier;
- (id)identifierPrefix;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 offlineState:(long long)arg2;
- (id)initWithIdentifier:(id)arg1 totalUnitCount:(long long)arg2 completedUnitCount:(long long)arg3;
- (bool)isCancelled;
- (bool)isEqual:(id)arg1;
- (bool)isFinished;
- (long long)offlineState;
- (void)removeAllComponents;
- (bool)removeComponent:(id)arg1;
- (void)setComponentFilter:(id)arg1;
- (void)setGreaterThanOrEqualToOfflineState:(long long)arg1;
- (void)setOfflineState:(long long)arg1;
- (long long)totalUnitCount;
- (bool)updatePercentComplete:(double)arg1;
- (bool)updateTotalUnitCount:(long long)arg1 completedUnitCount:(long long)arg2;

@end
