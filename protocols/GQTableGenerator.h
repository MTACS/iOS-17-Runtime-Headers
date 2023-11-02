
@protocol GQTableGenerator <NSObject>

@required

+ (int)beginCells:(GQDTTable *)arg1 state:(GQSDocument *)arg2;
+ (int)beginTable:(GQDTTable *)arg1 state:(GQSDocument *)arg2;
+ (int)endCells:(GQDTTable *)arg1 state:(GQSDocument *)arg2;
+ (int)endTable:(GQDTTable *)arg1 state:(GQSDocument *)arg2;
+ (int)handleCell:(GQDTCell *)arg1 state:(GQSDocument *)arg2;

@end
