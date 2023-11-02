
@interface HMCalendarEvent : HMTimeEvent <NSCopying, NSMutableCopying, NSSecureCoding> {
    NSDateComponents * _fireDateComponents;
}

@property (nonatomic, retain) NSDateComponents *fireDateComponents;

// Image: /System/Library/Frameworks/HomeKit.framework/HomeKit

+ (id)createWithDictionary:(id)arg1 home:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_serializeForAdd;
- (void)_updateFromDictionary:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)fireDateComponents;
- (id)initWithCoder:(id)arg1;
- (id)initWithDict:(id)arg1 fireDateComponents:(id)arg2;
- (id)initWithFireDateComponents:(id)arg1;
- (bool)mergeFromNewObject:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)setFireDateComponents:(id)arg1;
- (void)updateFireDateComponents:(id)arg1 completionHandler:(id /* block */)arg2;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

- (id)hf_stateDumpBuilderWithContext:(id)arg1;

@end
