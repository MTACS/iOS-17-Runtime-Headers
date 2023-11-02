
@protocol WhatDidTheySayIntentHandling <NSObject>

@required

- (void)handleWhatDidTheySay:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: WhatDidTheySayIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WhatDidTheySayIntentResponse *, void*
- (void)handleWhatDidTheySay:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: WhatDidTheySayIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WhatDidTheySayIntentResponse *, void*
- (void)resolveDeviceForWhatDidTheySay:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: WhatDidTheySayIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WhatDidTheySayDeviceResolutionResult *, void*
- (void)resolveDeviceForWhatDidTheySay:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: WhatDidTheySayIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WhatDidTheySayDeviceResolutionResult *, void*

@optional

- (void)confirmWhatDidTheySay:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: WhatDidTheySayIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WhatDidTheySayIntentResponse *, void*
- (void)confirmWhatDidTheySay:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: WhatDidTheySayIntent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, WhatDidTheySayIntentResponse *, void*

@end
