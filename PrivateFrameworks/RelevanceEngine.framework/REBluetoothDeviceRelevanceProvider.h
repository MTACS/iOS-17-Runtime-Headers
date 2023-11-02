
@interface REBluetoothDeviceRelevanceProvider : RERelevanceProvider {
    bool  _connectedToCar;
    bool  _connectedToSpeaker;
}

@property (nonatomic, readonly) bool connectedToCar;
@property (nonatomic, readonly) bool connectedToSpeaker;

+ (id)relevanceSimulatorID;

- (unsigned long long)_hash;
- (bool)connectedToCar;
- (bool)connectedToSpeaker;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryEncoding;
- (id)initWithConnectionToCar:(bool)arg1 connectionToSpeaker:(bool)arg2;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
