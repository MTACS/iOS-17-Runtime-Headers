
@interface PLUniformTypeIdentifier : NSObject <NSCopying> {
    short  _conformanceHint;
    NSString * _identifier;
    unsigned int  _wellKnownFileType;
}

@property (nonatomic, readonly) NSString *compactRepresentation;
@property (nonatomic, readonly) short conformanceHint;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) unsigned int wellKnownFileType;

+ (bool)isPlayableVideoTypeIdentifierString:(id)arg1;
+ (id)jpegUniformTypeIdentifier;
+ (id)plistUniformTypeIdentifier;
+ (id)quicktimeUniformTypeIdentifier;
+ (id)utiWithCompactRepresentation:(id)arg1 conformanceHint:(short)arg2;
+ (id)utiWithIdentifier:(id)arg1;
+ (id)videoComplementUniformTypeIdentifier;

- (void).cxx_destruct;
- (id)compactRepresentation;
- (short)conformanceHint;
- (bool)conformsToAudio;
- (bool)conformsToData;
- (bool)conformsToImage;
- (bool)conformsToJPEG;
- (bool)conformsToMovie;
- (bool)conformsToRawImage;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 compactRepresentation:(id)arg2 conformanceHint:(short)arg3;
- (bool)isDynamic;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToUniformTypeIdentifier:(id)arg1;
- (bool)isLosslessEncoding;
- (bool)isPlayableVideo;
- (bool)isPrimaryImageFormat;
- (id)preferredExtension;
- (unsigned int)wellKnownFileType;

@end
