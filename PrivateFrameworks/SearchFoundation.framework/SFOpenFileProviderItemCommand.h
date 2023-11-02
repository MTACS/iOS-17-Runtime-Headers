
@interface SFOpenFileProviderItemCommand : SFCommand <NSCopying, NSSecureCoding, SFOpenFileProviderItemCommand> {
    NSString * _coreSpotlightIdentifier;
    NSString * _fileProviderIdentifier;
    struct { 
        unsigned int shouldRevealFile : 1; 
    }  _has;
    bool  _shouldRevealFile;
}

@property (nonatomic, copy) NSData *backendData;
@property (nonatomic, copy) NSString *commandDetail;
@property (nonatomic, copy) NSString *coreSpotlightIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, copy) NSString *fileProviderIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SFTopic *normalizedTopic;
@property (nonatomic) bool shouldRevealFile;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)coreSpotlightIdentifier;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)fileProviderIdentifier;
- (bool)hasShouldRevealFile;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (void)setCoreSpotlightIdentifier:(id)arg1;
- (void)setFileProviderIdentifier:(id)arg1;
- (void)setShouldRevealFile:(bool)arg1;
- (bool)shouldRevealFile;

// Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec

- (int)_cpCommandType;

// Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI

- (Class)_searchUICommandHandlerClass;

@end
