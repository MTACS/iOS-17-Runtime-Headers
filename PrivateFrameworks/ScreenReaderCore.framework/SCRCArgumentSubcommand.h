
@interface SCRCArgumentSubcommand : NSObject {
    NSMutableArray * __optionMutableArray;
    NSString * _subcommandName;
}

@property (nonatomic, retain) NSMutableArray *_optionMutableArray;
@property (nonatomic, readonly, copy) NSArray *optionArray;
@property (nonatomic, copy) NSString *subcommandName;

+ (id)subcommandWithName:(id)arg1;

- (void).cxx_destruct;
- (id)_optionMutableArray;
- (void)addOption:(BOOL)arg1 argument:(id)arg2 target:(id)arg3 action:(SEL)arg4 argumentDescription:(id)arg5 required:(bool)arg6;
- (long long)compare:(id)arg1;
- (id)description;
- (id)formattedHelpFooter;
- (id)formattedHelpHeader;
- (unsigned long long)hash;
- (id)init;
- (id)initWithName:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)optionArray;
- (int)run;
- (void)setSubcommandName:(id)arg1;
- (void)set_optionMutableArray:(id)arg1;
- (void)showHelp;
- (void)stop;
- (void)stopDueToSigTerm;
- (id)subcommandName;

@end
