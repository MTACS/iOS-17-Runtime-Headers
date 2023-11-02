
@interface NTPBTodayModuleContentRequest : PBRequest <NSCopying> {
    struct { 
        unsigned int moduleDescriptorType : 1; 
    }  _has;
    int  _moduleDescriptorType;
    NSString * _name;
    NSString * _nameColorDark;
    NSString * _nameColorLight;
    NSString * _tagID;
}

@property (nonatomic) bool hasModuleDescriptorType;
@property (nonatomic, readonly) bool hasName;
@property (nonatomic, readonly) bool hasNameColorDark;
@property (nonatomic, readonly) bool hasNameColorLight;
@property (nonatomic, readonly) bool hasTagID;
@property (nonatomic) int moduleDescriptorType;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSString *nameColorDark;
@property (nonatomic, retain) NSString *nameColorLight;
@property (nonatomic, retain) NSString *tagID;

// Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasModuleDescriptorType;
- (bool)hasName;
- (bool)hasNameColorDark;
- (bool)hasNameColorLight;
- (bool)hasTagID;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)moduleDescriptorType;
- (id)name;
- (id)nameColorDark;
- (id)nameColorLight;
- (bool)readFrom:(id)arg1;
- (void)setHasModuleDescriptorType:(bool)arg1;
- (void)setModuleDescriptorType:(int)arg1;
- (void)setName:(id)arg1;
- (void)setNameColorDark:(id)arg1;
- (void)setNameColorLight:(id)arg1;
- (void)setTagID:(id)arg1;
- (id)tagID;
- (void)writeTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday

- (id)identifier;

@end
