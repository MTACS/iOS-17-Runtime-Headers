
@interface SSNameFormatManager : NSObject {
    NSPersonNameComponentsFormatter * _personNameComponentsFormatter;
}

@property (retain) NSPersonNameComponentsFormatter *personNameComponentsFormatter;

+ (void)initialize;
+ (id)personNameComponentsFromString:(id)arg1;

- (void).cxx_destruct;
- (id)init;
- (id)personNameComponentsFormatter;
- (void)setPersonNameComponentsFormatter:(id)arg1;

@end
