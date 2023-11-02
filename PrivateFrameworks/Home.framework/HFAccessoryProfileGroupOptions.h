
@interface HFAccessoryProfileGroupOptions : NSObject {
    bool  _byCategoryType;
    bool  _byClass;
    bool  _byManufacturer;
    bool  _byModel;
    bool  _byRoom;
}

@property (nonatomic) bool byCategoryType;
@property (nonatomic) bool byClass;
@property (nonatomic) bool byManufacturer;
@property (nonatomic) bool byModel;
@property (nonatomic) bool byRoom;

- (bool)byCategoryType;
- (bool)byClass;
- (bool)byManufacturer;
- (bool)byModel;
- (bool)byRoom;
- (void)setByCategoryType:(bool)arg1;
- (void)setByClass:(bool)arg1;
- (void)setByManufacturer:(bool)arg1;
- (void)setByModel:(bool)arg1;
- (void)setByRoom:(bool)arg1;

@end
