
@interface ICASStyleData : NSObject <AADataEventType> {
    ICASStyleType * _styleType;
}

@property (nonatomic, readonly) ICASStyleType *styleType;

+ (id)dataName;

- (void).cxx_destruct;
- (id)initWithStyleType:(id)arg1;
- (id)styleType;
- (id)toDict;

@end
