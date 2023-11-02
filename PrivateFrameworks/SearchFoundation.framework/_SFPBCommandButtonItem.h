
@interface _SFPBCommandButtonItem : PBCodable <NSSecureCoding, _SFPBCommandButtonItem> {
    _SFPBCommand * _command;
    _SFPBImage * _image;
    bool  _isDestructive;
    NSArray * _previewButtonItems;
    NSString * _title;
    unsigned long long  _uniqueId;
}

@property (nonatomic, retain) _SFPBCommand *command;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _SFPBImage *image;
@property (nonatomic) bool isDestructive;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSArray *previewButtonItems;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;
@property (nonatomic) unsigned long long uniqueId;

- (void).cxx_destruct;
- (void)addPreviewButtonItems:(id)arg1;
- (void)clearPreviewButtonItems;
- (id)command;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)image;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isDestructive;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)previewButtonItems;
- (id)previewButtonItemsAtIndex:(unsigned long long)arg1;
- (unsigned long long)previewButtonItemsCount;
- (bool)readFrom:(id)arg1;
- (void)setCommand:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setIsDestructive:(bool)arg1;
- (void)setPreviewButtonItems:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUniqueId:(unsigned long long)arg1;
- (id)title;
- (unsigned long long)uniqueId;
- (void)writeTo:(id)arg1;

@end
