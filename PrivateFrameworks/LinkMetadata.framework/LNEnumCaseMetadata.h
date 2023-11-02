
@interface LNEnumCaseMetadata : NSObject <NSCopying, NSSecureCoding> {
    LNDisplayRepresentation * _displayRepresentation;
    NSString * _identifier;
}

@property (nonatomic, readonly) LNDisplayRepresentation *displayRepresentation;
@property (nonatomic, readonly, copy) NSString *identifier;

// Image: /System/Library/PrivateFrameworks/LinkMetadata.framework/LinkMetadata

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)displayRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 displayRepresentation:(id)arg2;
- (bool)isEqual:(id)arg1;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

- (id)wf_localizedDisplayName;
- (id)wf_localizedSubtitle;
- (id)wf_symbolName;

@end
