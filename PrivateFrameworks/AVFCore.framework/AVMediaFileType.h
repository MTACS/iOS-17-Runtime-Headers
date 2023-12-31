
@interface AVMediaFileType : NSObject <NSCopying> {
    bool  _supportsSampleReferences;
    AVDispatchOnce * _supportsSampleReferencesOnce;
    NSString * _uti;
}

@property (nonatomic, readonly) NSString *UTI;
@property (nonatomic, readonly) unsigned int audioFileTypeID;
@property (nonatomic, readonly) NSString *defaultFileExtension;
@property (nonatomic, readonly) NSString *figFormatReaderFileFormat;
@property (nonatomic, readonly) NSSet *supportedMediaTypes;
@property (nonatomic, readonly) bool supportsSampleReferences;

+ (id)_mediaFileTypeWithFileTypeIdentifier:(id)arg1 exceptionReason:(id*)arg2;
+ (id)allFileTypeIdentifiers;
+ (struct __CFString { }*)figFileTypeProfileFromAVFileTypeProfile:(id)arg1;
+ (void)initialize;
+ (id)isoFileTypes;
+ (id)mediaFileTypeWithFileTypeIdentifier:(id)arg1;

- (id)UTI;
- (unsigned int)audioFileTypeID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)defaultFileExtension;
- (id)description;
- (id)figFormatReaderFileFormat;
- (id)initWithFileTypeIdentifier:(id)arg1 exceptionReason:(id*)arg2;
- (id)supportedMediaTypes;
- (bool)supportsFormat:(struct opaqueCMFormatDescription { }*)arg1;
- (bool)supportsOutputSettings:(id)arg1 reason:(id*)arg2;
- (bool)supportsSampleReferences;

@end
