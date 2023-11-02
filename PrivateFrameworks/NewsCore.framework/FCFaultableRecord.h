
@interface FCFaultableRecord : NSObject <FCKeyValueStoreCoding> {
    PBCodable * _record;
    NTPBRecordBase * _recordBase;
    NSData * _recordData;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _recordLock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (int)keyValuePairType;
+ (id)readValueFromKeyValuePair:(id)arg1;

- (void).cxx_destruct;
- (id)init;
- (void)writeToKeyValuePair:(id)arg1;
- (void)writeValueToDataWriter:(id)arg1;

@end
