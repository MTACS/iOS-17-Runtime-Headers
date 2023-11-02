
@interface CLMiLoExportDatabaseTableResult : NSObject <NSCopying, NSSecureCoding> {
    NSString * _exportDir;
    NSString * _fileName;
    NSString * _sandboxExtensionTok;
}

@property (nonatomic, readonly) NSString *exportDir;
@property (nonatomic, readonly) NSString *fileName;
@property (nonatomic, readonly) NSString *sandboxExtensionTok;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)exportDir;
- (id)fileName;
- (id)initWithCoder:(id)arg1;
- (id)initWithExportDir:(id)arg1 fileName:(id)arg2 sandboxExtensionTok:(id)arg3;
- (id)sandboxExtensionTok;

@end
