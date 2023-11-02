
@interface EntityKey : NSObject {
    int  _edgeElementId;
    int  _elementId;
    int  _parentElementId;
}

@property int edgeElementId;
@property int elementId;
@property int parentElementId;

+ (id)calendarEventName;
+ (id)currencyName;
+ (id)personEntity;
+ (id)userEntity;

- (int)edgeElementId;
- (int)elementId;
- (unsigned long long)hash;
- (id)initWithElementId:(int)arg1 edgeElementId:(int)arg2 parentElementId:(int)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToEntityKey:(id)arg1;
- (int)parentElementId;
- (void)setEdgeElementId:(int)arg1;
- (void)setElementId:(int)arg1;
- (void)setParentElementId:(int)arg1;

@end
