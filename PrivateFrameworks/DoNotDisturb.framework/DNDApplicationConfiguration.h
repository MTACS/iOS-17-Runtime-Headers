
@interface DNDApplicationConfiguration : NSObject <NSCopying, NSMutableCopying, NSSecureCoding> {
    NSMutableSet * _allowedThreads;
    NSMutableSet * _deniedThreads;
    unsigned long long  _minimumBreakthroughUrgency;
}

@property (nonatomic, readonly, copy) NSSet *allowedThreads;
@property (nonatomic, readonly, copy) NSSet *deniedThreads;
@property (nonatomic, readonly) unsigned long long minimumBreakthroughUrgency;

// Image: /System/Library/PrivateFrameworks/DoNotDisturb.framework/DoNotDisturb

+ (id)defaultConfiguration;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithMinimumBreakthroughUrgency:(unsigned long long)arg1 allowedThreads:(id)arg2 deniedThreads:(id)arg3;
- (id)allowedThreads;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)deniedThreads;
- (id)description;
- (id)diffDescription;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)minimumBreakthroughUrgency;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;

// Image: /System/Library/PrivateFrameworks/DoNotDisturbServer.framework/DoNotDisturbServer

+ (id)configurationForRecord:(id)arg1;

- (id)makeRecord;

@end
