
@interface HMMediaGroupProtoMediaDestinationAggregateData : PBCodable <NSCopying> {
    NSMutableArray * _destinationControllerDatas;
    NSMutableArray * _destinations;
    NSMutableArray * _groups;
}

@property (nonatomic, retain) NSMutableArray *destinationControllerDatas;
@property (nonatomic, retain) NSMutableArray *destinations;
@property (nonatomic, retain) NSMutableArray *groups;

+ (Class)destinationControllerDataType;
+ (Class)destinationType;
+ (Class)groupType;

- (void).cxx_destruct;
- (void)addDestination:(id)arg1;
- (void)addDestinationControllerData:(id)arg1;
- (void)addGroup:(id)arg1;
- (void)clearDestinationControllerDatas;
- (void)clearDestinations;
- (void)clearGroups;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)destinationAtIndex:(unsigned long long)arg1;
- (id)destinationControllerDataAtIndex:(unsigned long long)arg1;
- (id)destinationControllerDatas;
- (unsigned long long)destinationControllerDatasCount;
- (id)destinations;
- (unsigned long long)destinationsCount;
- (id)dictionaryRepresentation;
- (id)groupAtIndex:(unsigned long long)arg1;
- (id)groups;
- (unsigned long long)groupsCount;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDestinationControllerDatas:(id)arg1;
- (void)setDestinations:(id)arg1;
- (void)setGroups:(id)arg1;
- (void)writeTo:(id)arg1;

@end
