
@interface DYJavaScriptHelperContext : NSObject {
    DYJSScriptingContext * _context;
}

- (id)evaluateDerivedCounters;
- (bool)evaluateScript:(id)arg1;
- (bool)evaluateScriptCode:(id)arg1;
- (void)exportCounterValues:(id)arg1;
- (id)generateJavascriptCode:(id)arg1 softwareCounterNames:(id)arg2 derivedCounterNames:(id)arg3;
- (id)init;
- (bool)prepareCounterNames:(id)arg1 softwareCounterNames:(id)arg2 derivedCounterNames:(id)arg3;
- (bool)prepareCounterValues:(id)arg1 softwareCounterValues:(id)arg2;

@end
