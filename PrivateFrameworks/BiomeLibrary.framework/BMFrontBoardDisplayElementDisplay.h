
@interface BMFrontBoardDisplayElementDisplay : BMEventBase <BMStoreData> {
    int  _backlightStatus;
    NSString * _deviceName;
    NSString * _hardwareIdentifier;
    int  _interfaceOrientation;
    NSString * _name;
    NSArray * _transitionReasons;
    int  _type;
}

@property (nonatomic, readonly) int backlightStatus;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *deviceName;
@property (nonatomic, readonly) NSString *hardwareIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) int interfaceOrientation;
@property (nonatomic, readonly) NSString *name;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *transitionReasons;
@property (nonatomic, readonly) int type;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)_transitionReasonsJSONArray;
- (int)backlightStatus;
- (unsigned int)dataVersion;
- (id)description;
- (id)deviceName;
- (id)hardwareIdentifier;
- (id)initByReadFrom:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithType:(int)arg1 name:(id)arg2 deviceName:(id)arg3 hardwareIdentifier:(id)arg4 interfaceOrientation:(int)arg5 backlightStatus:(int)arg6 transitionReasons:(id)arg7;
- (int)interfaceOrientation;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)name;
- (id)serialize;
- (id)transitionReasons;
- (int)type;
- (void)writeTo:(id)arg1;

@end
