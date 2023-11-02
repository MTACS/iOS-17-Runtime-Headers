
@protocol _INPBAirportGate <NSObject>

@required

- (_INPBAirport *)airport;
- (NSString *)gate;
- (bool)hasAirport;
- (bool)hasGate;
- (bool)hasTerminal;
- (void)setAirport:(_INPBAirport *)arg1;
- (void)setGate:(NSString *)arg1;
- (void)setTerminal:(NSString *)arg1;
- (NSString *)terminal;

@end
