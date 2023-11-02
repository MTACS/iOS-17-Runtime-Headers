
@interface SFCommandButtonItem : SFButtonItem <NSCopying, NSSecureCoding, SFCommandButtonItem> {
    SFCommand * _command;
    struct { 
        unsigned int isDestructive : 1; 
    }  _has;
    SFImage * _image;
    bool  _isDestructive;
    NSArray * _previewButtonItems;
    NSString * _title;
}

@property (nonatomic, retain) SFCommand *command;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SFImage *image;
@property (nonatomic) bool isDestructive;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSArray *previewButtonItems;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;
@property (nonatomic) unsigned long long uniqueId;

// Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)command;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasIsDestructive;
- (unsigned long long)hash;
- (id)image;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (bool)isDestructive;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)previewButtonItems;
- (void)setCommand:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setIsDestructive:(bool)arg1;
- (void)setPreviewButtonItems:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

// Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI

- (Class)_searchUIButtonItemGeneratorClass;
- (id)_searchUI_requestAppClipCommand;

@end
