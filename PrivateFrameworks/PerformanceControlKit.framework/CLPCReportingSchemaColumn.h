
@interface CLPCReportingSchemaColumn : NSObject {
    unsigned long long  _format;
    unsigned long long  _metadataType;
    NSString * _name;
    unsigned long long  _statID;
    unsigned long long  _type;
    NSNumber * _valueID;
}

@property (nonatomic) unsigned long long format;
@property (nonatomic) unsigned long long metadataType;
@property (nonatomic, retain) NSString *name;
@property (nonatomic) unsigned long long statID;
@property (nonatomic) unsigned long long type;
@property (nonatomic, retain) NSNumber *valueID;

- (void).cxx_destruct;
- (unsigned long long)format;
- (id)init;
- (unsigned long long)metadataType;
- (id)name;
- (void)setFormat:(unsigned long long)arg1;
- (void)setMetadataType:(unsigned long long)arg1;
- (void)setName:(id)arg1;
- (void)setStatID:(unsigned long long)arg1;
- (void)setType:(unsigned long long)arg1;
- (void)setValueID:(id)arg1;
- (unsigned long long)statID;
- (unsigned long long)type;
- (id)valueID;

@end
