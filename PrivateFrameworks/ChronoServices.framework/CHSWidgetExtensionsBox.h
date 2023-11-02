
@interface CHSWidgetExtensionsBox : NSObject <CHSXPCEncodable> {
    NSData * _archivedData;
    NSSet * _extensions;
}

@property (nonatomic, copy) NSSet *extensions;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)extensions;
- (id)initWithCoder:(id)arg1;
- (id)initWithExtensions:(id)arg1;
- (void)prepareForEncoding;
- (void)setExtensions:(id)arg1;

@end
