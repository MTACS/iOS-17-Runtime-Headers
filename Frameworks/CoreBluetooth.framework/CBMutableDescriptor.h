
@interface CBMutableDescriptor : CBDescriptor {
    NSNumber * _ID;
}

@property (retain) NSNumber *ID;

- (void).cxx_destruct;
- (id)ID;
- (id)description;
- (id)initWithCharacteristic:(id)arg1 dictionary:(id)arg2;
- (id)initWithType:(id)arg1 value:(id)arg2;
- (void)setID:(id)arg1;

@end
