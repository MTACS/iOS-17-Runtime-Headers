
@interface HMSignificantTimeEvent : HMTimeEvent <NSCopying, NSMutableCopying, NSSecureCoding> {
    NSDateComponents * _offset;
    NSString * _significantEvent;
}

@property (nonatomic, retain) NSDateComponents *offset;
@property (nonatomic, retain) NSString *significantEvent;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

+ (id)createWithDictionary:(id)arg1 home:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_serializeForAdd;
- (void)_updateFromDictionary:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDict:(id)arg1 significantEvent:(id)arg2 offset:(id)arg3;
- (id)initWithSignificantEvent:(id)arg1 offset:(id)arg2;
- (bool)mergeFromNewObject:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)offset;
- (void)setOffset:(id)arg1;
- (void)setSignificantEvent:(id)arg1;
- (id)significantEvent;
- (void)updateOffset:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)updateSignificantEvent:(id)arg1 completionHandler:(id /* block */)arg2;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

- (id)hf_stateDumpBuilderWithContext:(id)arg1;

@end
