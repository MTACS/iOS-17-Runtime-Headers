
@interface SFBeginMapsRoutingCommand : SFCommand <NSCopying, NSSecureCoding, SFBeginMapsRoutingCommand> {
    int  _directionsMode;
    struct { 
        unsigned int shouldSearchDirectionsAlongCurrentRoute : 1; 
        unsigned int directionsMode : 1; 
    }  _has;
    SFLatLng * _location;
    NSData * _mapsData;
    NSString * _name;
    bool  _shouldSearchDirectionsAlongCurrentRoute;
}

@property (nonatomic, copy) NSData *backendData;
@property (nonatomic, copy) NSString *commandDetail;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic) int directionsMode;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SFLatLng *location;
@property (nonatomic, copy) NSData *mapsData;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) SFTopic *normalizedTopic;
@property (nonatomic) bool shouldSearchDirectionsAlongCurrentRoute;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (int)directionsMode;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasDirectionsMode;
- (bool)hasShouldSearchDirectionsAlongCurrentRoute;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithProtobuf:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)location;
- (id)mapsData;
- (id)name;
- (void)setDirectionsMode:(int)arg1;
- (void)setLocation:(id)arg1;
- (void)setMapsData:(id)arg1;
- (void)setName:(id)arg1;
- (void)setShouldSearchDirectionsAlongCurrentRoute:(bool)arg1;
- (bool)shouldSearchDirectionsAlongCurrentRoute;

// Image: /System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec

- (int)_cpCommandType;

// Image: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI

- (Class)_searchUICommandHandlerClass;

@end
