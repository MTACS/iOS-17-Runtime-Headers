
@interface WFDatabaseObjectDescriptor : NSObject <NSCopying, NSSecureCoding> {
    NSString * _identifier;
    unsigned long long  _objectType;
}

@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) NSString *displaySubtitle;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) unsigned long long objectType;

// Image: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient

+ (id)mockWithIdentifier:(id)arg1 objectType:(unsigned long long)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 objectType:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (unsigned long long)objectType;

// Image: /System/Library/PrivateFrameworks/WorkflowUICore.framework/WorkflowUICore

- (id)displayName;
- (id)displaySubtitle;

@end
