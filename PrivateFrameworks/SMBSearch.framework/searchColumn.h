
@interface searchColumn : NSObject {
    int  _propNumber;
    rowVariant * _propValue;
}

@property int propNumber;
@property (retain) rowVariant *propValue;

- (void).cxx_destruct;
- (id)initWithPropertyNumber:(int)arg1 RVariant:(id)arg2;
- (int)propNumber;
- (id)propValue;
- (void)setPropNumber:(int)arg1;
- (void)setPropValue:(id)arg1;

@end
