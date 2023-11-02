
@interface BMPBGameControllerEvent : PBCodable <NSCopying> {
    struct { 
        unsigned int numberOfControllersConnected : 1; 
        unsigned int isControllerConnected : 1; 
    }  _has;
    bool  _isControllerConnected;
    int  _numberOfControllersConnected;
}

@property (nonatomic) bool hasIsControllerConnected;
@property (nonatomic) bool hasNumberOfControllersConnected;
@property (nonatomic) bool isControllerConnected;
@property (nonatomic) int numberOfControllersConnected;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIsControllerConnected;
- (bool)hasNumberOfControllersConnected;
- (unsigned long long)hash;
- (bool)isControllerConnected;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)numberOfControllersConnected;
- (bool)readFrom:(id)arg1;
- (void)setHasIsControllerConnected:(bool)arg1;
- (void)setHasNumberOfControllersConnected:(bool)arg1;
- (void)setIsControllerConnected:(bool)arg1;
- (void)setNumberOfControllersConnected:(int)arg1;
- (void)writeTo:(id)arg1;

@end
