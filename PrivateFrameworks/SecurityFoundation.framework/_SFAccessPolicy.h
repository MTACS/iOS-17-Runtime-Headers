
@interface _SFAccessPolicy : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _accessControlList;
    NSString * _accessGroup;
    struct { 
        long long mode; 
        struct { 
            unsigned long long authenticationRequirements; 
            long long subsetCount; 
        } authenticationPolicy; 
    }  _accessibility;
    long long  _sharingPolicy;
}

@property (nonatomic, copy) NSArray *accessControlList;
@property (nonatomic, copy) NSString *accessGroup;
@property (nonatomic) struct { long long x1; struct { unsigned long long x_2_1_1; long long x_2_1_2; } x2; } accessibility;
@property (nonatomic, readonly) struct __CFDictionary { }*secAccessibilityAttributes;
@property (nonatomic) long long sharingPolicy;

+ (id)accessPolicyWithSecAccessibility:(struct __CFString { }*)arg1 error:(id*)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)accessControlList;
- (id)accessGroup;
- (struct { long long x1; struct { unsigned long long x_2_1_1; long long x_2_1_2; } x2; })accessibility;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithAccessibility:(struct { long long x1; struct { unsigned long long x_2_1_1; long long x_2_1_2; } x2; })arg1 sharingPolicy:(long long)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (struct __CFDictionary { }*)secAccessibilityAttributes;
- (void)setAccessControlList:(id)arg1;
- (void)setAccessGroup:(id)arg1;
- (void)setAccessibility:(struct { long long x1; struct { unsigned long long x_2_1_1; long long x_2_1_2; } x2; })arg1;
- (void)setSharingPolicy:(long long)arg1;
- (long long)sharingPolicy;

@end
