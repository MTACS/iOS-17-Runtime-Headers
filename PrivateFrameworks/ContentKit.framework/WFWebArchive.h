
@interface WFWebArchive : NSObject <NSSecureCoding> {
    WFWebResource * _mainResource;
    NSArray * _subframeArchives;
    NSArray * _subresources;
}

@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) WFWebResource *mainResource;
@property (nonatomic, readonly) NSArray *subframeArchives;
@property (nonatomic, readonly) NSArray *subresources;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)containedImageFiles;
- (id)data;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithMainResource:(id)arg1 subresources:(id)arg2 subframeArchives:(id)arg3;
- (id)initWithSerializedRepresentation:(id)arg1;
- (id)mainResource;
- (id)serializedRepresentation;
- (id)subframeArchives;
- (id)subresources;

@end
