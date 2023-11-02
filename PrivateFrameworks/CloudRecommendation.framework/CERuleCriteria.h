
@interface CERuleCriteria : NSObject <NSCopying, NSSecureCoding> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSNumber * _max;
    NSNumber * _min;
}

@property (nonatomic, retain) NSNumber *max;
@property (nonatomic, retain) NSNumber *min;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)max;
- (id)min;
- (void)setMax:(id)arg1;
- (void)setMin:(id)arg1;

@end
