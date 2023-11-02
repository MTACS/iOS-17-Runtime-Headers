
@interface SKHandle : NSObject <NSCopying, NSSecureCoding> {
    NSString * _handleString;
}

@property (nonatomic, readonly) NSString *handleString;
@property (nonatomic, readonly) NSString *idsDestination;
@property (nonatomic, readonly) NSString *normalizedHandleString;

// Image: /System/Library/PrivateFrameworks/StatusKit.framework/StatusKit

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)handleString;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithString:(id)arg1;
- (id)initWithString:(id)arg1 mergeID:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isExactlyEqualToHandle:(id)arg1;

// Image: /System/Library/PrivateFrameworks/StatusKitAgentCore.framework/StatusKitAgentCore

- (id)idsDestination;
- (bool)isNormalizedEqualToHandle:(id)arg1;
- (id)normalizedHandleString;

@end
