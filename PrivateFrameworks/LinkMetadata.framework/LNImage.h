
@interface LNImage : NSObject <NSCopying, NSSecureCoding, WFVariableSerialization> {
    unsigned long long  _displayStyle;
    INImage * _inImage;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) unsigned long long displayStyle;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) INImage *inImage;
@property (nonatomic, readonly) LNImage *proxiedImageCopy;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/LinkMetadata.framework/LinkMetadata

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)displayStyle;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)inImage;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1 renderingMode:(unsigned long long)arg2;
- (id)initWithData:(id)arg1 renderingMode:(unsigned long long)arg2 displayStyle:(unsigned long long)arg3;
- (id)initWithINImage:(id)arg1;
- (id)initWithINImage:(id)arg1 displayStyle:(unsigned long long)arg2;
- (id)initWithImageNamed:(id)arg1;
- (id)initWithImageNamed:(id)arg1 renderingMode:(unsigned long long)arg2;
- (id)initWithImageNamed:(id)arg1 renderingMode:(unsigned long long)arg2 displayStyle:(unsigned long long)arg3;
- (id)initWithSystemImageNamed:(id)arg1;
- (id)initWithURL:(id)arg1 renderingMode:(unsigned long long)arg2;
- (id)initWithURL:(id)arg1 renderingMode:(unsigned long long)arg2 displayStyle:(unsigned long long)arg3;
- (id)initWithURL:(id)arg1 width:(double)arg2 height:(double)arg3 renderingMode:(unsigned long long)arg4;
- (id)initWithURL:(id)arg1 width:(double)arg2 height:(double)arg3 renderingMode:(unsigned long long)arg4 displayStyle:(unsigned long long)arg5;
- (bool)isEqual:(id)arg1;
- (id)proxiedImageCopy;

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

- (id)initWithSerializedRepresentation:(id)arg1 variableProvider:(id)arg2 parameter:(id)arg3;
- (id)serializedRepresentation;
- (unsigned long long)wfImageDisplayStyleFromLNImageDisplayStyle:(unsigned long long)arg1;
- (id)wf_image;

@end
