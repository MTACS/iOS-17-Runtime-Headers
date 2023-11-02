
@interface PBUIImageOnDiskFormat : NSObject <NSCopying> {
    NSDictionary * _addImageOptions;
    NSDictionary * _destinationOptions;
    NSString * _filenameExtension;
    NSString * _typeIdentifier;
}

@property (nonatomic, readonly, copy) NSDictionary *addImageOptions;
@property (nonatomic, readonly, copy) NSDictionary *destinationOptions;
@property (nonatomic, readonly, copy) NSString *filenameExtension;
@property (nonatomic, readonly, copy) NSString *typeIdentifier;

+ (id)atxWithBlockSize:(unsigned int)arg1 twiddling:(bool)arg2;
+ (id)defaultATX;
+ (id)defaultFormat;
+ (id)png;

- (void).cxx_destruct;
- (id)addImageOptions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)destinationOptions;
- (id)filenameExtension;
- (id)formatByAppendingDestinationOptions:(id)arg1 addImageOptions:(id)arg2;
- (id)initWithTypeIdentifier:(id)arg1 filenameExtension:(id)arg2 destinationOptions:(id)arg3 addImageOptions:(id)arg4;
- (id)initWithTypeRecord:(id)arg1 destinationOptions:(id)arg2 addImageOptions:(id)arg3;
- (id)resolveAddImageOptionsForImage:(struct CGImage { }*)arg1;
- (id)resolveDestinationOptionsForImage:(struct CGImage { }*)arg1;
- (id)typeIdentifier;

@end
